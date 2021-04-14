/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface WFTaskIdentifier : NSObject <NSCopying, NSSecureCoding> {

	int _pid;
	NSUUID* _UUID;
	NSString* _processName;

}

@property (nonatomic,readonly) NSUUID * UUID;                       //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSString * processName;              //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) int pid;                             //@synthesize pid=_pid - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)UUID;
-(NSString *)processName;
-(int)pid;
@end

