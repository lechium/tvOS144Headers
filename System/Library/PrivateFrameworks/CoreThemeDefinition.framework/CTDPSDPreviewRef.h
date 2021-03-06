/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
#import <CoreUI/CUIPSDImageRef.h>

@class NSArray;

@interface CTDPSDPreviewRef : CUIPSDImageRef {

	PSDImageInfo _imageInfo;
	long long _layerCount;
	long long _sliceCount;
	long long _columnWidth;
	long long _rowHeight;
	NSArray* _layerIndexLayout;
	long long _sliceRowCount;
	long long _sliceColumnCount;
	NSArray* _sliceRects;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(long long)sliceRowCount;
-(long long)sliceColumnCount;
-(void)evaluateSliceGrid;
-(BOOL)hasRegularSliceGrid;
-(BOOL)hasGradient;
-(long long)numberOfGradientLayers;
-(long long)numberOfAlphaChannels;
-(long long)indexOfDrawingLayerType:(long long)arg1 ;
@end

