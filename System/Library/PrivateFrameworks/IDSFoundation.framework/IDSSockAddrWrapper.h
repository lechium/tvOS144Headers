/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSSockAddrWrapper : NSObject <NSCopying> {

	sockaddr_storage _sa;

}

@property (nonatomic,readonly) const sockaddr* sa; 
@property (nonatomic,readonly) const sockaddr_in* sa4; 
@property (nonatomic,readonly) const sockaddr_in6* sa6; 
@property (nonatomic,readonly) unsigned short saPortHostOrder; 
+(id)wrapperWithSockAddr:(const sockaddr*)arg1 ;
+(id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 withInterfaceName:(id)arg3 ;
+(id)wrapperWithAddressString:(id)arg1 withPortHostOrder:(unsigned short)arg2 ;
+(id)wrapperWithWrapper:(id)arg1 andPortHostOrder:(unsigned short)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(const sockaddr*)sa;
-(id)initWithSockAddr:(const sockaddr*)arg1 ;
-(const sockaddr_in*)sa4;
-(const sockaddr_in6*)sa6;
-(BOOL)isEqualToWrapper:(id)arg1 ;
-(unsigned short)saPortHostOrder;
-(BOOL)isEqualToSockAddr:(const sockaddr*)arg1 ;
-(id)ipData;
-(id)ipString;
-(void)copySockAddr:(sockaddr*)arg1 ;
-(void)updateLocalPort:(unsigned short)arg1 ;
@end

