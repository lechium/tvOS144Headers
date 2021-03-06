//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PDUserNotification.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface PDGenericUserNotification : PDUserNotification <NSSecureCoding>
{
    NSString *_title;	// 96 = 0x60
    NSString *_message;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100143a9c
- (void).cxx_destruct;	// IMP=0x0000000100143d98
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)notificationContentWithDataSource:(id)arg1;	// IMP=0x0000000100143cf4
- (id)description;	// IMP=0x0000000100143c48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100143b9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100143aa4
- (id)_initWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3 hashComponents:(id)arg4;	// IMP=0x00000001001438f8
- (id)initWithTitle:(id)arg1 message:(id)arg2 forPassUniqueIdentifier:(id)arg3;	// IMP=0x00000001001437fc
- (id)initWithMessage:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010014379c
- (id)initWithTitle:(id)arg1 message:(id)arg2;	// IMP=0x000000010014373c
- (id)initWithMessage:(id)arg1;	// IMP=0x0000000100143724

@end

