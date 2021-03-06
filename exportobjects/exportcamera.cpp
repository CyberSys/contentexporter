//-------------------------------------------------------------------------------------
// ExportCamera.cpp
//
// Advanced Technology Group (ATG)
// Copyright (C) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.
//
// http://go.microsoft.com/fwlink/?LinkId=226208
//-------------------------------------------------------------------------------------

#include "stdafx.h"
#include "ExportCamera.h"

namespace ATG
{

    ExportCamera::ExportCamera( ExportString strName )
      : ExportBase( strName ),
        LocalPosition( 0, 0, 0 ),
        Direction( 0, 1, 0 ),
        Up( 0, 0, 1 ),
        fFocalLength( 35.0f ),
        fFieldOfView( 0.8f ),
        fNearClip( 0.01f ),
        fFarClip( 1000.0f )
    {
    }

}
