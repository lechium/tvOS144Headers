//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString, SSMutableAuthenticationContext;

@interface PurchaseAuthenticateOperation : ISOperation
{
    CDUnknownBlockType _authenticationBlock;	// 96 = 0x60
    SSMutableAuthenticationContext *_authenticationContext;	// 104 = 0x68
}

- (id)_userAgentForPurchases:(id)arg1;	// IMP=0x00000001001cb360
- (id)_clientIdentifierForPurchases:(id)arg1;	// IMP=0x00000001001cb208
- (void)run;	// IMP=0x00000001001cb03c
@property(copy) NSString *clientIdentifierHeader;
@property(copy) CDUnknownBlockType authenticationBlock;
- (void)dealloc;	// IMP=0x00000001001cae70
- (id)initWithPurchases:(id)arg1;	// IMP=0x00000001001cac90

@end
