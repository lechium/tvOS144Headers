/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIFaceDetector.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIFaceDetectorVision : HMFObject <HMIFaceDetector, HMFLogging>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(void)releaseCachedResources;
+(id)detectFacesInImageData:(id)arg1 error:(id*)arg2 ;
+(id)detectFacesInPixelBuffer:(CVBufferRef)arg1 error:(id*)arg2 ;
@end

