/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:59 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UAPasteboardFileItemProviding <UAPasteboardItemProviding>
@property (assign,nonatomic) BOOL preferFileRep; 
@required
-(void)setPreferFileRep:(BOOL)arg1;
-(BOOL)preferFileRep;
-(void)getDataFileWithCompletionBlock:(/*^block*/id)arg1;
-(id)getFileName;

@end

