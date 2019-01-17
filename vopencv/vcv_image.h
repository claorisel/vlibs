#ifndef VCV_IMAGE_H
#define VCV_IMAGE_H

#include <memory>
#include <vector>

#include "vcv_includes.h"


//=======================================================================================
namespace cv
{
    template<typename _Tp> class Point3_;
    typedef Point3_<float> Point3f;

    template<typename _Tp> class Point_;
    typedef Point_<float> Point2f;
}
//=======================================================================================

//=======================================================================================
namespace vcv
{
    //===================================================================================
    //      Image
    //===================================================================================
    //  Методы будем делать виртуальными, чтобы перегружать все возможные в GpuImage.
    class Image
    {
    public:
        Image();
        virtual ~Image();
        Image( Image&& rhs );
        Image( const Image& rhs );
        Image& operator = ( Image&& rhs );
        Image& operator = ( const Image& rhs );

        class Projection;

    protected:
        // Ручное управление, чтобы соблюдать семантику cv::Mat.
        class Pimpl; Pimpl *p = nullptr;
    };
    //===================================================================================
    //      Image
    //===================================================================================
    //      GpuImage
    //===================================================================================
    class GpuImage : public Image
    {
    public:
        #ifdef V_OPENCV_USE_CUDA
        #endif
    };
    //===================================================================================
    //      GpuImage
    //===================================================================================


    //===================================================================================
    //      Projection
    //===================================================================================
    class Image::Projection final
    {
    public:
        class ObjectPoints;
        class Rotation;
        class Translation;
        class CameraMatrix;
        class Distortion;

        Projection( const ObjectPoints& ops,
                    const Rotation&     rtn,
                    const Translation&  trn,
                    const CameraMatrix& cmt,
                    const Distortion&   dsn );
        ~Projection();

        static Projection default_project_1( float left,
                                             float right,
                                             float near,
                                             float far );

        void v_deb() const;

    private:
        std::vector<cv::Point2f> _image_points;
    };
    //===================================================================================

    class Image::Projection::ObjectPoints final
    {
    public:
        ObjectPoints( float left, float right, float near, float far );
        ~ObjectPoints();

    private:
        friend class Projection;
        std::vector<cv::Point3f> _points;
    };
    //===================================================================================
    class Image::Projection::Rotation
    {
    public:
        static Rotation default_rtn_1();
        Rotation( float x, float y, float z );

    private:
        friend class Projection;
        std::vector<float> _rotation;
    };
    //===================================================================================
    class Image::Projection::Translation
    {
    public:
        static Translation default_trn_1();
        Translation( float x, float y, float z );

    private:
        friend class Projection;
        std::vector<float> _translation;
    };
    //===================================================================================
    // http://devdoc.net/linux/OpenCV-3.2.0/d9/d0c/group__calib3d.html#ga1019495a2c8d1743ed5cc23fa0daff8c
    class Image::Projection::CameraMatrix
    {
    public:
        static CameraMatrix default_mtx_1();
        CameraMatrix( float Fx, float Cx, float Fy, float Cy );

    private:
        friend class Projection;
        class Pimpl; std::shared_ptr<Pimpl> p;
    };
    //===================================================================================
    // Input vector of distortion coefficients
    // (k1,k2,p1,p2[,k3[,k4,k5,k6[,s1,s2,s3,s4[,τx,τy]]]]) of 4, 5, 8, 12 or 14 elements.
    // If the vector is empty, the zero distortion coefficients are assumed.
    class Image::Projection::Distortion
    {
    public:
        Distortion( float k1 = 0, float k2 = 0,
                    float p1 = 0, float p2 = 0,
                    float k3 = 0 );

    private:
        friend class Projection;
        std::vector<float> _distortion;
    };
    //===================================================================================
    //      Projection
    //===================================================================================

} // namespace vcv
//=======================================================================================



#endif // VCV_IMAGE_H