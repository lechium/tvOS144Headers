/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:39 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TVSystemUI/TVSystemUI-Structs.h>
@class NSOperationQueue, ACAccountStore;

@interface TVSUIProfilePictureStore : NSObject {

	double _profilePictureDiameter;
	NSOperationQueue* _networkOperationQueue;
	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) NSOperationQueue * networkOperationQueue;              //@synthesize networkOperationQueue=_networkOperationQueue - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) double profilePictureDiameter;                         //@synthesize profilePictureDiameter=_profilePictureDiameter - In the implementation block
+(id)_requestHandlerQueue;
+(CGRect)_CNAvatarImageUtilities_adjustedSquareCropRect:(CGRect)arg1 toFitImageOfSize:(CGSize)arg2 ;
+(CGRect)_CNAvatarImageUtilities_intersectingSquareCropRect:(CGRect)arg1 forRect:(CGRect)arg2 ;
-(void)cancelAllOperations;
-(ACAccountStore *)accountStore;
-(void)_fetchProfilePictureWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchProfilePictureForAppleAccount:(id)arg1 serverCacheTag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_croppedImageWithRect:(CGRect)arg1 originalImage:(id)arg2 ;
-(id)initWithProfilePictureDiameter:(double)arg1 ;
-(void)fetchProfilePictureForFamilyMemberWithDSID:(id)arg1 serverCacheTag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchProfilePictureForAppleAccountWithAltDSID:(id)arg1 serverCacheTag:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(double)profilePictureDiameter;
-(NSOperationQueue *)networkOperationQueue;
@end

