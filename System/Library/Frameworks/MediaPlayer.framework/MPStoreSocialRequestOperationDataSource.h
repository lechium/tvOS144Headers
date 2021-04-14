/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class MPModelSocialPerson;


@protocol MPStoreSocialRequestOperationDataSource <NSObject>
@property (nonatomic,retain) MPModelSocialPerson * person; 
@optional
-(id)fallbackBagKeys;
-(id)fallbackURLString;

@required
-(MPModelSocialPerson *)person;
-(void)setPerson:(id)arg1;
-(id)queryItems;
-(id)bagKey;
-(id)httpBody;
-(long long)httpMethod;
-(long long)httpBodyType;

@end

