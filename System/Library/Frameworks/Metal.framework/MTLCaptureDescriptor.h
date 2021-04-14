/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:08 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying> {

	id _captureObject;
	long long _destination;
	NSURL* _outputURL;

}

@property (nonatomic,retain) id captureObject;                   //@synthesize captureObject=_captureObject - In the implementation block
@property (assign,nonatomic) long long destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy) NSURL * outputURL;                    //@synthesize outputURL=_outputURL - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setCaptureObject:(id)arg1 ;
-(void)setDestination:(long long)arg1 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(id)captureObject;
-(long long)destination;
-(NSURL *)outputURL;
@end

