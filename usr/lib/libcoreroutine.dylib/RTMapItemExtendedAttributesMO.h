/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSUUID, NSNumber;

@interface RTMapItemExtendedAttributesMO : NSManagedObject

@property (nonatomic,copy) NSString * addressIdentifier; 
@property (nonatomic,copy) NSUUID * identifier; 
@property (nonatomic,copy) NSNumber * isMe; 
@property (nonatomic,copy) NSNumber * wifiConfidence; 
@property (nonatomic,copy) NSNumber * wifiFingerprintLabelType; 
+(id)fetchRequest;
+(id)managedObjectWithExtendedAttributes:(id)arg1 managedObject:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)managedObjectWithExtendedAttributes:(id)arg1 inManagedObjectContext:(id)arg2 ;
@end

