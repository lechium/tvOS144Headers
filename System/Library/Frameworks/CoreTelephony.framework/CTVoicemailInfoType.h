/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CTVoicemailInfoType : NSObject <NSCopying, NSSecureCoding> {

	BOOL _available;
	BOOL _isNetworkOriginated;
	BOOL _isVoiceMailMWI;
	NSString* _url;
	NSNumber* _count;

}

@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (assign,nonatomic) BOOL available;                        //@synthesize available=_available - In the implementation block
@property (nonatomic,retain) NSNumber * count;                      //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) BOOL isNetworkOriginated;              //@synthesize isNetworkOriginated=_isNetworkOriginated - In the implementation block
@property (assign,nonatomic) BOOL isVoiceMailMWI;                   //@synthesize isVoiceMailMWI=_isVoiceMailMWI - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSNumber *)count;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(void)setCount:(NSNumber *)arg1 ;
-(BOOL)available;
-(void)setAvailable:(BOOL)arg1 ;
-(BOOL)isNetworkOriginated;
-(BOOL)isVoiceMailMWI;
-(void)setIsNetworkOriginated:(BOOL)arg1 ;
-(void)setIsVoiceMailMWI:(BOOL)arg1 ;
-(BOOL)isEqualToCTVoicemailInfoType:(id)arg1 ;
-(id)initWithParam:(id)arg1 available:(BOOL)arg2 count:(id)arg3 isNetworkOriginated:(BOOL)arg4 isVoiceMailMWI:(BOOL)arg5 ;
@end

