/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSMutableDictionary;

@interface CPLPushChangeTasks : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _tasksByType;
	NSMutableDictionary* _mutableTasksByType;

}

@property (nonatomic,readonly) BOOL hasTasks; 
+(BOOL)supportsSecureCoding;
+(id)descriptionForTaskType:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initEmpty;
-(void)_commitTasks;
-(void)enumerateScopedTasksWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateTasksWithBlock:(/*^block*/id)arg1 ;
-(void)addTask:(long long)arg1 forRecordWithScopedIdentifier:(id)arg2 ;
-(BOOL)hasTasks;
-(id)_descriptionFromTasksByType:(id)arg1 ;
-(id)invalidRecordScopedIdentifiers;
-(id)invalidRecordIdentifiers;
@end

