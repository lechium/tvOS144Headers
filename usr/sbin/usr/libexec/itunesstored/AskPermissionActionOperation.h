//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSURL, SSAccount;

@interface AskPermissionActionOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
    NSURL *_URL;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000001001873dc
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) SSAccount *account; // @synthesize account=_account;
- (void)run;	// IMP=0x0000000100187190
- (id)initWithURL:(id)arg1 account:(id)arg2;	// IMP=0x00000001001870dc

@end

