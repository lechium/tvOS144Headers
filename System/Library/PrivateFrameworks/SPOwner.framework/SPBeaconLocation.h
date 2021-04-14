/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SPOwner/SPOwner-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface SPBeaconLocation : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _timestamp;
	double _latitude;
	double _longitude;
	double _horizontalAccuracy;
	NSString* _source;

}

@property (nonatomic,copy) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double latitude;                          //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                         //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,copy) NSString * source;                          //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) double horizontalAccuracy;              //@synthesize horizontalAccuracy=_horizontalAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)source;
-(void)setSource:(NSString *)arg1 ;
-(NSDate *)timestamp;
-(double)latitude;
-(double)longitude;
-(void)setLongitude:(double)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setTimestamp:(NSDate *)arg1 ;
-(double)horizontalAccuracy;
-(id)initWithTimestamp:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 horizontalAccuracy:(double)arg4 source:(id)arg5 ;
@end

