/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSData, NSString;

@interface HMDNetworkRouterCredential : NSObject <NSCopying, HAPTLVProtocol> {

	NSData* _macAddress;
	NSData* _psk;

}

@property (nonatomic,retain) NSData * macAddress;                   //@synthesize macAddress=_macAddress - In the implementation block
@property (nonatomic,retain) NSData * psk;                          //@synthesize psk=_psk - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSData *)macAddress;
-(NSData *)psk;
-(void)setMacAddress:(NSData *)arg1 ;
-(void)setPsk:(NSData *)arg1 ;
-(id)serializeWithError:(id*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)initWithMacAddress:(id)arg1 psk:(id)arg2 ;
@end

