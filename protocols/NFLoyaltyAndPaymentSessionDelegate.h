/* Generated by RuntimeBrowser.
 */

@protocol NFLoyaltyAndPaymentSessionDelegate <NSObject>

@optional

- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didDetectField:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didEndTransaction:(NFContactlessPaymentEndEvent *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didExpireTransactionForApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didFailDeferredAuthorization:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didFelicaStateChange:(NSDictionary *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didPerformValueAddedServiceTransactions:(NSArray *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didReceiveButtonPressForApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didSelectApplet:(NFApplet *)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didSelectValueAddedService:(BOOL)arg2;
- (void)loyaltyAndPaymentSession:(NFLoyaltyAndPaymentSession *)arg1 didStartTransaction:(NFContactlessPaymentStartEvent *)arg2;
- (void)loyaltyAndPaymentSessionDidEndUnexpectedly:(NFLoyaltyAndPaymentSession *)arg1;

@end
