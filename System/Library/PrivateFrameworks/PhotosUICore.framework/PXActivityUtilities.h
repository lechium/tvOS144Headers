/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:42 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXActivityUtilities : NSObject
+(id)sharedWorkQueue;
+(void)requestMeContactWithCompletion:(/*^block*/id)arg1 ;
+(void)requestContactMatchingEmail:(id)arg1 orPhone:(id)arg2 withFirstName:(id)arg3 lastName:(id)arg4 keysToFetch:(id)arg5 withCompletion:(/*^block*/id)arg6 ;
+(void)requestImageFromPeopleAlbumForPerson:(id)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
+(void)requestImageForContact:(id)arg1 targetSize:(CGSize)arg2 completion:(/*^block*/id)arg3 ;
+(void)_requestMonogramForFirstName:(id)arg1 lastName:(id)arg2 targetSize:(CGSize)arg3 completion:(/*^block*/id)arg4 ;
+(void)requestPersonImageWithTargetSize:(CGSize)arg1 matchingEmail:(id)arg2 orPhone:(id)arg3 withFirstName:(id)arg4 lastName:(id)arg5 prefersPhotosImage:(BOOL)arg6 withCompletion:(/*^block*/id)arg7 ;
+(id)textForDate:(id)arg1 ;
+(id)_initialsImageGradientStartColor;
+(id)_initialsImageGradientEndColor;
+(id)_tintedInitialsImage:(id)arg1 ;
@end

