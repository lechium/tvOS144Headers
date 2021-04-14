/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:09 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MLCompute/MLCLossLayer.h>

@class MLCYOLOLossDescriptor;

@interface MLCYOLOLossLayer : MLCLossLayer {

	MLCYOLOLossDescriptor* _yoloLossDescriptor;

}

@property (nonatomic,copy,readonly) MLCYOLOLossDescriptor * yoloLossDescriptor;              //@synthesize yoloLossDescriptor=_yoloLossDescriptor - In the implementation block
+(id)layerWithDescriptor:(id)arg1 ;
-(id)description;
-(BOOL)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3 ;
-(id)summarizedDOTDescription;
-(unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2 ;
-(id)initWithLossDescriptor:(id)arg1 ;
-(MLCYOLOLossDescriptor *)yoloLossDescriptor;
@end

