/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, SHSignatureMetrics, AVAudioTime, NSUUID, NSDate;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying> {

	NSData* _dataRepresentation;
	SHSignatureMetrics* _metrics;
	AVAudioTime* _time;
	NSUUID* _ID;
	NSDate* _startDate;

}

@property (nonatomic,readonly) NSUUID * ID;                              //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) AVAudioTime * time;                         //@synthesize time=_time - In the implementation block
@property (nonatomic,copy) SHSignatureMetrics * metrics;                 //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)signatureFromData:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
+(id)signatureWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(double)length;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)dataRepresentation;
-(NSDate *)startDate;
-(AVAudioTime *)time;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setMetrics:(SHSignatureMetrics *)arg1 ;
-(SHSignatureMetrics *)metrics;
-(void)setTime:(AVAudioTime *)arg1 ;
-(NSUUID *)ID;
-(id)initWithID:(id)arg1 dataRepresentation:(id)arg2 startTime:(id)arg3 ;
@end

