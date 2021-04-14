/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:19:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying> {

	NSString* _host;
	NSString* _alternateHost;
	long long _port;
	long long _alternatePort;
	NSString* _partition;
	NSDate* _expirationDate;
	long long _serviceType;

}

@property (nonatomic,retain) NSString * host;                       //@synthesize host=_host - In the implementation block
@property (nonatomic,retain) NSString * alternateHost;              //@synthesize alternateHost=_alternateHost - In the implementation block
@property (assign,nonatomic) long long port;                        //@synthesize port=_port - In the implementation block
@property (assign,nonatomic) long long alternatePort;               //@synthesize alternatePort=_alternatePort - In the implementation block
@property (nonatomic,retain) NSString * partition;                  //@synthesize partition=_partition - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) long long serviceType;                 //@synthesize serviceType=_serviceType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)host;
-(long long)port;
-(void)setPartition:(NSString *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)partition;
-(NSDate *)expirationDate;
-(void)setHost:(NSString *)arg1 ;
-(NSString *)alternateHost;
-(void)setAlternateHost:(NSString *)arg1 ;
-(void)setPort:(long long)arg1 ;
-(long long)alternatePort;
-(void)setAlternatePort:(long long)arg1 ;
-(long long)serviceType;
-(void)setServiceType:(long long)arg1 ;
@end
