//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "Task.h"

@class NSArray, NSMutableDictionary;

@interface SystemAppBootstrapTask : Task
{
    NSMutableDictionary *_installs;	// 8 = 0x8
    NSArray *_results;	// 16 = 0x10
}

+ (id)_messageForError:(id)arg1;	// IMP=0x0000000100090364
- (void).cxx_destruct;	// IMP=0x0000000100090730
@property(readonly, copy) NSArray *results; // @synthesize results=_results;
- (void)_showInternalConnectionDialogWithError:(id)arg1;	// IMP=0x0000000100090500
- (void)main;	// IMP=0x000000010008f934
- (id)initWithInstalls:(id)arg1;	// IMP=0x000000010008f6e0

@end

