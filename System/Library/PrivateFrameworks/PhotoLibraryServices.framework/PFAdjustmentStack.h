/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration> {

	NSArray* _adjustments;
	NSOrderedSet* _maskUUIDs;
	unsigned long long _formatVersion;

}
+(BOOL)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_PF40*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithAdjustments:(id)arg1 ;
-(id)initWithEnvelopeDictionary:(id)arg1 ;
-(id)envelopeDictionary;
-(id)adjustmentAtIndex:(unsigned long long)arg1 ;
-(id)firstAdjustmentWithIdentifier:(id)arg1 ;
-(id)adjustmentsWithIdentifier:(id)arg1 ;
-(id)maskUUIDs;
@end

