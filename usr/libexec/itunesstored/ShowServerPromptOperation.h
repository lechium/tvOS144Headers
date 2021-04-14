//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ShowServerPromptOperation : ISOperation
{
    NSString *_promptIdentifier;	// 96 = 0x60
}

- (_Bool)_promptNeedsDisplay;	// IMP=0x00000001000a77e8
- (id)_newStoreURLOperation:(id *)arg1;	// IMP=0x00000001000a75b8
- (_Bool)_automaticDownloadsPromptNeedsDisplay;	// IMP=0x00000001000a7560
- (void)run;	// IMP=0x00000001000a7084
@property(readonly) NSString *promptIdentifier;
- (void)dealloc;	// IMP=0x00000001000a7014
- (id)initWithPromptIdentifier:(id)arg1;	// IMP=0x00000001000a6fac
- (id)init;	// IMP=0x00000001000a6f9c

@end
