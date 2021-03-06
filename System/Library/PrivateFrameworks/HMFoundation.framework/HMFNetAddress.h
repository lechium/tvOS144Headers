/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress : HMFObject {

	HMFNetAddressInternal* _internal;

}

@property (nonatomic,readonly) HMFNetAddressInternal * internal;              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) unsigned long long addressFamily; 
@property (nonatomic,copy,readonly) NSString * addressString; 
+(id)localAddress;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)dataUsingEncoding:(unsigned long long)arg1 ;
-(id)initWithHostname:(id)arg1 ;
-(HMFNetAddressInternal *)internal;
-(NSString *)addressString;
-(unsigned long long)addressFamily;
-(id)attributeDescriptions;
-(id)initWithSocketAddress:(const sockaddr*)arg1 ;
@end

