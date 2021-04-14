/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:32:34 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol TVTopShelfContentExtensionControlling <NSObject,BSDescriptionProviding>
@property (nonatomic,copy,readonly) NSString * extensionPointIdentifier; 
@property (nonatomic,copy,readonly) NSString * containingBundleIdentifier; 
@property (assign,nonatomic,__weak) id<TVTopShelfContentExtensionControllingDelegate> delegate; 
@required
-(void)invalidate;
-(id<TVTopShelfContentExtensionControllingDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(NSString *)containingBundleIdentifier;
-(NSString *)extensionPointIdentifier;
-(void)loadTopShelfContentAndAttributes:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)performCustomActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)didSelectActionWithURL:(id)arg1 actionUserInfo:(id)arg2 forItemWithIdentifier:(id)arg3 itemUserInfo:(id)arg4;
-(void)didShowItemWithIdentifier:(id)arg1 userInfo:(id)arg2;

@end

