/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MLCDeviceCPU, NSArray;

@interface _MLCCPULayer : NSObject {

	MLCDeviceCPU* _device;
	void* _filter;
	NSArray* _deviceOps;

}

@property (nonatomic,readonly) MLCDeviceCPU * device;              //@synthesize device=_device - In the implementation block
@property (assign,nonatomic) void* filter;                         //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSArray * deviceOps;                  //@synthesize deviceOps=_deviceOps - In the implementation block
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensor:(id)arg4 ;
+(BOOL)compileWithDevice:(id)arg1 deviceOps:(id)arg2 sourceTensors:(id)arg3 resultTensors:(id)arg4 ;
-(void)dealloc;
-(MLCDeviceCPU *)device;
-(void*)filter;
-(void)setFilter:(void*)arg1 ;
-(NSArray *)deviceOps;
-(void)setDeviceOps:(NSArray *)arg1 ;
-(id)initWithDevice:(id)arg1 deviceOps:(id)arg2 ;
@end

