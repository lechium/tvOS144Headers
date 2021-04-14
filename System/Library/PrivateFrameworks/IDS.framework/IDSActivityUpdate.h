/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:01 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, IDSDevice, NSArray;

@interface IDSActivityUpdate : NSObject <NSSecureCoding> {

	BOOL _isDeviceOnline;
	NSString* _subActivity;
	NSData* _pushToken;
	unsigned long long _serverTimestamp;
	NSData* _clientContext;
	IDSDevice* _matchingDevice;
	NSArray* _URIs;

}

@property (assign,nonatomic) BOOL isDeviceOnline;                               //@synthesize isDeviceOnline=_isDeviceOnline - In the implementation block
@property (nonatomic,retain) IDSDevice * matchingDevice;                        //@synthesize matchingDevice=_matchingDevice - In the implementation block
@property (nonatomic,retain) NSArray * URIs;                                    //@synthesize URIs=_URIs - In the implementation block
@property (nonatomic,readonly) NSString * subActivity;                          //@synthesize subActivity=_subActivity - In the implementation block
@property (nonatomic,readonly) NSData * pushToken;                              //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) unsigned long long serverTimestamp;              //@synthesize serverTimestamp=_serverTimestamp - In the implementation block
@property (nonatomic,readonly) NSData * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)pushToken;
-(NSArray *)URIs;
-(unsigned long long)serverTimestamp;
-(NSString *)subActivity;
-(id)initWithSubActivity:(id)arg1 pushToken:(id)arg2 serverTimestamp:(unsigned long long)arg3 clientContext:(id)arg4 isDeviceOnline:(BOOL)arg5 ;
-(BOOL)isDeviceOnline;
-(void)setIsDeviceOnline:(BOOL)arg1 ;
-(NSData *)clientContext;
-(IDSDevice *)matchingDevice;
-(void)setMatchingDevice:(IDSDevice *)arg1 ;
-(void)setURIs:(NSArray *)arg1 ;
@end

