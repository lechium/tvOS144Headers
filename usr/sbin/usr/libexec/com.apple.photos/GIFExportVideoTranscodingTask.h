//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VideoTranscodingTask.h"

@class NSProgress, PFExportGIFRequest;

__attribute__((visibility("hidden")))
@interface GIFExportVideoTranscodingTask : VideoTranscodingTask
{
    NSProgress *_progress;	// 136 = 0x88
    PFExportGIFRequest *_exportGIFRequest;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000010001cd10
@property(retain) PFExportGIFRequest *exportGIFRequest; // @synthesize exportGIFRequest=_exportGIFRequest;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
- (void)cancelTranscode;	// IMP=0x000000010001cba0
- (double)currentFractionCompleted;	// IMP=0x000000010001ca8c
- (_Bool)hasProgress;	// IMP=0x000000010001ca50
- (void)performExport;	// IMP=0x000000010001c920

@end

