//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface InAppReviewRequest : NSManagedObject
{
}

+ (id)entityForContext:(id)arg1;	// IMP=0x0000000100187894
- (id)valueHash;	// IMP=0x0000000100187940

// Remaining properties
@property(retain, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(retain, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(retain, nonatomic) NSDate *date; // @dynamic date;
@property(nonatomic) _Bool rated; // @dynamic rated;

@end

