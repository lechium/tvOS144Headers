//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError, NSString;

@protocol SRPClientRequest <NSObject>
@property(readonly, copy, nonatomic) NSString *recordID;
@property(readonly, retain, nonatomic) NSDictionary *escrowRecord;
@property(readonly, copy, nonatomic) NSString *recoveryPassphrase;
@property(readonly, copy, nonatomic) NSString *recordLabel;
@property(readonly, copy, nonatomic) NSString *dsid;
- (NSError *)validateInput;
@end
