/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoEncoderDelegate.h>

@class NSString;

@interface HMIVideoEncoderDelegateAdapter : HMFObject <HMIVideoEncoderDelegate> {

	/*^block*/id _encoderDidEncodeSampleBuffer;
	/*^block*/id _encoderDidFailWithError;

}

@property (copy) id encoderDidEncodeSampleBuffer;                   //@synthesize encoderDidEncodeSampleBuffer=_encoderDidEncodeSampleBuffer - In the implementation block
@property (copy) id encoderDidFailWithError;                        //@synthesize encoderDidFailWithError=_encoderDidFailWithError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)encoder:(id)arg1 didEncodeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)encoder:(id)arg1 didFailWithError:(id)arg2 ;
-(id)encoderDidEncodeSampleBuffer;
-(id)encoderDidFailWithError;
-(void)setEncoderDidEncodeSampleBuffer:(id)arg1 ;
-(void)setEncoderDidFailWithError:(id)arg1 ;
@end

