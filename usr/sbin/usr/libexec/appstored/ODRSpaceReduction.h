//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ODRSpaceReduction : NSObject
{
    long long _spaceReduction;	// 8 = 0x8
    NSMutableArray *_preallocatedFiles;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000ff318
@property(retain) NSMutableArray *preallocatedFiles; // @synthesize preallocatedFiles=_preallocatedFiles;
@property(readonly) long long spaceReduction; // @synthesize spaceReduction=_spaceReduction;
- (id)initWithSpaceReduction:(long long)arg1;	// IMP=0x00000001000ff214

@end

