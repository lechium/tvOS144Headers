/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:21:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef {

	_CUIPSDSublayerInfo* _sublayerInfo;

}
-(void)dealloc;
-(BOOL)isOpen;
-(CGRect)bounds;
-(unsigned)numberOfLayers;
-(id)layerNames;
-(id)initWithImageRef:(id)arg1 layerIndex:(unsigned)arg2 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(BOOL)isLayerGroup;
-(BOOL)_isGroupType:(unsigned)arg1 ;
-(BOOL)isGroupStart;
-(BOOL)isGroupEnd;
-(id)layerEnumerator;
-(void)enumerateLayersUsingBlock:(/*^block*/id)arg1 ;
@end

