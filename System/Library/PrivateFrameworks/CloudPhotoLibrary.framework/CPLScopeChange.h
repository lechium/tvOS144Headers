/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:23:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <CloudPhotoLibrary/CPLRecordChange.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CPLShare, CPLLibraryState, CPLLibraryInfo, CPLEngineScope, CPLScopedIdentifier, NSString, NSDate, CPLAccountFlags;

@interface CPLScopeChange : CPLRecordChange <NSSecureCoding, NSCopying> {

	BOOL _activated;
	long long _scopeType;
	CPLShare* _share;
	CPLLibraryState* _libraryState;
	CPLLibraryInfo* _libraryInfo;
	unsigned long long _pullTaskItem;
	CPLEngineScope* _scope;

}

@property (assign,nonatomic) long long scopeType;                               //@synthesize scopeType=_scopeType - In the implementation block
@property (nonatomic,retain) CPLLibraryState * libraryState;                    //@synthesize libraryState=_libraryState - In the implementation block
@property (nonatomic,retain) CPLLibraryInfo * libraryInfo;                      //@synthesize libraryInfo=_libraryInfo - In the implementation block
@property (assign,nonatomic) unsigned long long pullTaskItem;                   //@synthesize pullTaskItem=_pullTaskItem - In the implementation block
@property (nonatomic,retain) CPLEngineScope * scope;                            //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy) CPLScopedIdentifier * scopedIdentifier; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSDate * recordModificationDate; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (nonatomic,readonly) NSDate * disabledDate; 
@property (nonatomic,readonly) NSDate * deleteDate; 
@property (nonatomic,readonly) CPLAccountFlags * accountFlags; 
@property (nonatomic,retain) CPLShare * share;                                  //@synthesize share=_share - In the implementation block
@property (assign,getter=isActivated,nonatomic) BOOL activated;                 //@synthesize activated=_activated - In the implementation block
+(id)descriptionForScopeType:(long long)arg1 ;
+(Class)scopeChangeClassForType:(long long)arg1 ;
+(id)mappingForScopeTypeDescription;
+(BOOL)shouldAutoActivateScopeWithType:(long long)arg1 ;
+(id)newScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
+(id)newScopeChangeInferClassWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
+(id)newDeleteScopeChangeWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
+(BOOL)cplShouldIgnorePropertyForEquality:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)redactedDescription;
-(CPLEngineScope *)scope;
-(BOOL)isActivated;
-(void)setScope:(CPLEngineScope *)arg1 ;
-(BOOL)isDisabled;
-(CPLShare *)share;
-(void)setShare:(CPLShare *)arg1 ;
-(long long)scopeType;
-(void)_setChangeType:(unsigned long long)arg1 ;
-(id)initWithScopeIdentifier:(id)arg1 type:(long long)arg2 ;
-(id)_scopedIdentifier;
-(id)scopeIdentifier;
-(id)assetCountPerType;
-(NSDate *)disabledDate;
-(NSDate *)deleteDate;
-(CPLAccountFlags *)accountFlags;
-(long long)defaultFlags;
-(void)udpateScopeFromScopeChange:(id)arg1 direction:(unsigned long long)arg2 didHaveChanges:(BOOL*)arg3 ;
-(void)setScopeType:(long long)arg1 ;
-(void)setActivated:(BOOL)arg1 ;
-(CPLLibraryState *)libraryState;
-(void)setLibraryState:(CPLLibraryState *)arg1 ;
-(CPLLibraryInfo *)libraryInfo;
-(void)setLibraryInfo:(CPLLibraryInfo *)arg1 ;
-(unsigned long long)pullTaskItem;
-(void)setPullTaskItem:(unsigned long long)arg1 ;
@end

