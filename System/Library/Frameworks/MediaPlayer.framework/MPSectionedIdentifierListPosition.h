/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MPSectionedIdentifierListPosition : NSObject <NSSecureCoding> {

	NSString* _sectionIdentifier;
	NSString* _itemIdentifier;
	long long _entryType;

}

@property (nonatomic,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                 //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) long long entryType;                       //@synthesize entryType=_entryType - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)positionForItem:(id)arg1 inSection:(id)arg2 ;
+(id)positionForHeadOfSection:(id)arg1 ;
+(id)positionForTailOfSection:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(NSString *)itemIdentifier;
-(long long)entryType;
-(NSString *)sectionIdentifier;
@end

