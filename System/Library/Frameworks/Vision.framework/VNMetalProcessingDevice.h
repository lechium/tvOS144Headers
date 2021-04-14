/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNProcessingDevice.h>

@protocol MTLDevice;
@interface VNMetalProcessingDevice : VNProcessingDevice {

	id<MTLDevice> _metalDevice;

}
+(id)allDevices;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithMetalDevice:(id)arg1 ;
-(id)metalDevice;
-(int)espressoStorageType;
-(BOOL)targetsGPU;
-(int)espressoDeviceID;
-(int)espressoEngine;
@end

