/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol P256PublicKeyProtocol <NSObject>
@required
-(id)dataRepresentation;
-(id)initWithData:(id)arg1 error:(id*)arg2;
-(BOOL)verifySignature:(id)arg1 data:(id)arg2;

@end
