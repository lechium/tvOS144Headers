/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface MIDINetworkHost : NSObject {

	void* _imp;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * address; 
@property (nonatomic,readonly) unsigned long long port; 
@property (nonatomic,readonly) NSString * netServiceName; 
@property (nonatomic,readonly) NSString * netServiceDomain; 
+(id)hostWithName:(id)arg1 address:(id)arg2 port:(unsigned long long)arg3 ;
+(id)hostWithName:(id)arg1 netServiceName:(id)arg2 netServiceDomain:(id)arg3 ;
+(id)hostWithName:(id)arg1 netService:(id)arg2 ;
+(id)fromAddressAsText:(id)arg1 withName:(id)arg2 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)host;
-(unsigned long long)port;
-(void)setName:(NSString *)arg1 ;
-(NSString *)address;
-(id)displayName;
-(id)addressAsText;
-(BOOL)hasSameAddressAs:(id)arg1 ;
-(NSString *)netServiceName;
-(NSString *)netServiceDomain;
@end

