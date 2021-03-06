/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationItem.h>

@class NSString;

@interface _MPCAutoPlayEnumerationResult : NSObject <MPSectionedIdentifierListEnumerationItem> {

	NSString* _sectionIdentifier;

}

@property (nonatomic,readonly) NSString * sectionIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (getter=isRemoved,nonatomic,readonly) BOOL removed; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)itemIdentifier;
-(long long)entryType;
-(NSString *)sectionIdentifier;
-(id)itemResult;
-(id)trackingEntryResult;
-(long long)branchDepth;
-(BOOL)isRemoved;
-(id)initWithSectionIdentifier:(id)arg1 ;
@end

