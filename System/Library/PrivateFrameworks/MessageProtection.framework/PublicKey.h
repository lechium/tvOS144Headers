/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol P256PublicKeyProtocol;
@interface PublicKey : NSObject {

	id<P256PublicKeyProtocol> _key;

}

@property (retain) id<P256PublicKeyProtocol> key;              //@synthesize key=_key - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id<P256PublicKeyProtocol>)key;
-(id)initWithKey:(id)arg1 ;
-(id)dataRepresentation;
-(void)setKey:(id<P256PublicKeyProtocol>)arg1 ;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
@end
