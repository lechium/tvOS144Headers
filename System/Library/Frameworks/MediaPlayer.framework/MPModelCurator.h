/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPModelPerson.h>

@class NSString;

@interface MPModelCurator : MPModelPerson

@property (nonatomic,copy) NSString * shortName; 
@property (nonatomic,copy) NSString * editorNotes; 
@property (nonatomic,copy) NSString * shortEditorNotes; 
@property (assign,nonatomic) long long curatorKind; 
@property (nonatomic,copy) id editorialArtworkCatalogBlock; 
@property (nonatomic,copy) id brandLogoArtworkCatalogBlock; 
@property (nonatomic,copy) NSString * handle; 
+(id)__editorialArtworkCatalogBlock_KEY;
+(id)__editorNotes_KEY;
+(id)__shortEditorNotes_KEY;
+(id)__shortName_KEY;
+(id)__curatorKind_KEY;
+(id)__brandLogoArtworkCatalogBlock_KEY;
+(id)__handle_KEY;
-(id)editorialArtworkCatalog;
-(id)brandLogoArtworkCatalog;
@end

