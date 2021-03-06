/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:24:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _PLThumbnailLoadingAsset <NSObject>
@optional
-(id)uuid;
-(CGSize*)imageSize;
-(id)thumbnailIdentifier;

@required
-(id)objectID;
-(BOOL)complete;
-(unsigned long long)effectiveThumbnailIndex;
-(id)pl_photoLibrary;
-(long long)cloudPlaceholderKind;

@end

