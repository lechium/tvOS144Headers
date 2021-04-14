//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPAnalyzedAssets : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

+ (id)assetsWithoutFingerprintsFromPhotoLibrary:(id)arg1;	// IMP=0x0000000100011234
+ (id)assetsFromPhotoLibrary:(id)arg1;	// IMP=0x00000001000111c8
@property(readonly) unsigned long long count; // @synthesize count=_count;
- (int)next:(id *)arg1;	// IMP=0x0000000100011324
- (void)dealloc;	// IMP=0x00000001000112a4
- (id)initWithPhotoLibrary:(id)arg1 andCondition:(id)arg2;	// IMP=0x0000000100010e78

@end

