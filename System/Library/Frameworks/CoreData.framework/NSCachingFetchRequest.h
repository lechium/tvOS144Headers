/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSFetchRequest.h>

@class NSDictionary;

@interface NSCachingFetchRequest : NSFetchRequest {

	NSDictionary* _substitutionVariables;
	id _cachedInfo;
	id _identifier;
	os_unfair_lock_s _lock;

}

@property (nonatomic,copy) NSDictionary * substitutionVariables; 
+(id)_generateIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(NSDictionary *)substitutionVariables;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(BOOL)_isCachingFetchRequest;
-(id)_copyForDirtyContext;
@end

