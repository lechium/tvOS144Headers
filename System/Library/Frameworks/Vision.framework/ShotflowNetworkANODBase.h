/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/ShotflowNetwork.h>

@interface ShotflowNetworkANODBase : ShotflowNetwork
+(CGSize)inputImageSize;
+(float)nonSquareYawDefault;
+(float)nonSquareRollDefault;
+(BOOL)poseSquare;
+(unsigned long long)mumberBinsNegativeMaxout;
+(const vector<float, std::__1::allocator<float> >*)ratios;
+(const vector<float, std::__1::allocator<float> >*)cellStartsX;
+(const vector<float, std::__1::allocator<float> >*)cellStartsY;
+(unsigned long long)numberMaxoutLayers;
-(id)initWithModelPath:(id)arg1 espressoEngineID:(int)arg2 espressoDeviceID:(int)arg3 espressoStorageType:(int)arg4 threshold:(float)arg5 ;
-(void)initializeBuffers;
@end
