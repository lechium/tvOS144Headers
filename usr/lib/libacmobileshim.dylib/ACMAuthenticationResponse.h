/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString, NSDictionary, NSError;


@protocol ACMAuthenticationResponse <NSObject>
@property (retain) NSString * token; 
@property (retain) NSString * userName; 
@property (retain) NSDictionary * rawResponseData; 
@property (retain) NSError * error; 
@property (assign) BOOL generatedWithTouchID; 
@optional
-(void)setGeneratedWithTouchID:(BOOL)arg1;
-(BOOL)generatedWithTouchID;

@required
-(NSError *)error;
-(void)setError:(id)arg1;
-(NSString *)token;
-(NSString *)userName;
-(void)setToken:(id)arg1;
-(NSDictionary *)rawResponseData;
-(void)setRawResponseData:(id)arg1;
-(void)setUserName:(id)arg1;

@end

