//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, SSAccount;
@protocol RestoreDownloadItemsOperationDelegate;

@interface RestoreDownloadItemsOperation : ISOperation
{
    SSAccount *_account;	// 96 = 0x60
    NSArray *_downloadItems;	// 104 = 0x68
    NSMutableArray *_responses;	// 112 = 0x70
    _Bool _shouldShowTermsAndConditionsDialog;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000001000f8290
- (void)_showDialogsForResponse:(id)arg1;	// IMP=0x00000001000f7ff8
- (_Bool)_runWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000f6bb8
- (id)_runWithItems:(id)arg1 options:(id)arg2;	// IMP=0x00000001000f62d4
- (id)_runWithBodyData:(id)arg1 contentEncoding:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x00000001000f5bbc
- (void)_run;	// IMP=0x00000001000f52a0
- (id)_plistDataWithItems:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000001000f4f40
- (id)_newResponseWithItems:(id)arg1 error:(id)arg2;	// IMP=0x00000001000f4e48
- (void)_addResponse:(id)arg1;	// IMP=0x00000001000f4d60
- (void)run;	// IMP=0x00000001000f4d54
@property _Bool shouldShowTermsAndConditionsDialog;
@property(readonly) NSArray *responses;
@property(readonly) NSArray *downloadItems;
@property(readonly) SSAccount *account;
- (id)initWithDownloadItems:(id)arg1 account:(id)arg2;	// IMP=0x00000001000f4b70

// Remaining properties
@property __weak id <RestoreDownloadItemsOperationDelegate> delegate; // @dynamic delegate;

@end
