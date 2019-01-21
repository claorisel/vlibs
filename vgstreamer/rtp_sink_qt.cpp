/****************************************************************************************
**
**  VLIBS codebase, NIIAS
**
**  Authors:
**  Alexandre Gromtsev aka elapidae     elapidae@yandex.ru
**  Nadezhda Churikova aka claorisel    claorisel@gmail.com
**  Ekaterina Boltenkova aka kataretta  kitkat52@yandex.ru
**  Ivan Deylid aka sid1057             ivanov.dale@gmail.com>
**
**  GNU Lesser General Public License Usage
**  This file may be used under the terms of the GNU Lesser General Public License
**  version 3 as published by the Free Software Foundation and appearing in the file
**  LICENSE.LGPL3 included in the packaging of this file. Please review the following
**  information to ensure the GNU Lesser General Public License version 3 requirements
**  will be met: https://www.gnu.org/licenses/lgpl-3.0.html.
****************************************************************************************/


#include "rtp_sink_qt.h"

#include "vimage_qt.h"

RTP_Sink_Qt::RTP_Sink_Qt(quint16 port, QObject *parent)
    : QObject ( parent )
    , _sink   ( port   )
{
    _sink.new_sample.connect( [this]( VGstSample sample )
    {
        QImage res;
        auto extractor = [&res](const VImage& vimg)
        {
            res = VImage_Qt::convert(vimg);
            res.detach();
        };
        sample.extract_image( extractor );

        emit this->image_received( res );
    });
}
