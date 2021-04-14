/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaEntityIdentifierInternal.h>

@class NSNumber, VUIMediaEntityType, NSString;

@interface VUIMPMediaEntityIdentifier : NSObject <VUIMediaEntityIdentifierInternal> {

	NSNumber* _persistentID;
	VUIMediaEntityType* _mediaEntityType;

}

@property (nonatomic,copy) NSNumber * persistentID;                           //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,copy) VUIMediaEntityType * mediaEntityType;              //@synthesize mediaEntityType=_mediaEntityType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showIdentifierWithMediaItem:(id)arg1 ;
+(id)mediaItemIdentifierWithMediaItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(NSNumber *)persistentID;
-(void)setPersistentID:(NSNumber *)arg1 ;
-(void)setMediaEntityType:(VUIMediaEntityType *)arg1 ;
-(VUIMediaEntityType *)mediaEntityType;
-(id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2 ;
@end

