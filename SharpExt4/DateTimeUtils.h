#pragma once

using namespace System;

namespace SharpExt4 {
    public ref class DateTimeUtils abstract sealed
    {
    public:
        static property System::DateTime UnixEpoch
        {
            System::DateTime get()
            {
                return System::DateTime(1970, 1, 1, 0, 0, 0, 0, System::DateTimeKind::Utc);
            }
        }
    };
} 