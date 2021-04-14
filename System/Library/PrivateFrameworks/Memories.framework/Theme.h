/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, UIImage;

@interface Theme : NSObject {

	NSString* m_themeID;

}

@property (nonatomic,readonly) NSString * themeID; 
@property (nonatomic,readonly) NSString * trailerID; 
@property (nonatomic,readonly) UIImage * previewImage; 
@property (nonatomic,readonly) NSString * displayName; 
+(BOOL)themeIDIsTrailer:(id)arg1 ;
+(id)themeWithID:(id)arg1 ;
+(id)trailerIDFromThemeID:(id)arg1 ;
+(id)themeIDs;
+(id)themeIDFromTrailerID:(id)arg1 ;
-(NSString *)displayName;
-(UIImage *)previewImage;
-(id)posterImage;
-(id)musicName;
-(id)micaFileBaseName;
-(NSString *)themeID;
-(id)micaFileNameForTitleNamed:(id)arg1 ;
-(id)initWithThemeID:(id)arg1 ;
-(NSString *)trailerID;
-(id)micaFileNameForTransitionName:(id)arg1 transitionDirection:(int)arg2 ;
-(id)micaFileNameForCutawayName:(id)arg1 cutawayDirection:(int)arg2 ;
-(id)displayNameForTransitionName:(id)arg1 ;
@end

