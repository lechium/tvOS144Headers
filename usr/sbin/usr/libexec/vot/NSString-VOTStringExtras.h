//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (VOTStringExtras)
+ (id)stringWithUnichar:(unsigned short)arg1;	// IMP=0x0000000100027d78
- (struct _NSRange)wordFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000100027f34
- (struct _NSRange)lineFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000100027eb4
- (struct _NSRange)paragraphFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000100027e34
- (struct _NSRange)sentenceFromPosition:(long long)arg1 inDirection:(long long)arg2;	// IMP=0x0000000100027db4
@end
